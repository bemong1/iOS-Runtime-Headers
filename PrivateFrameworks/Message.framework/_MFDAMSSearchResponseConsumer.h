/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSDate, MFConditionLock;



@interface _MFDAMSSearchResponseConsumer : _MFDAMSBasicConsumer <DADSearchQueryConsumer>
{
    NSDate *latestDateToAdd;
    MFConditionLock *doneCondition;
    double timeReceivedLastResponse;
    NSUInteger totalCount;
}

@property(retain) NSDate *latestDateToAdd;


- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)resetDoneCondition;
- (void)setLatestDateToAdd:(id)arg1;
- (id)latestDateToAdd;
- (BOOL)waitUntilDoneBeforeDate:(id)arg1;
- (void)waitUntilDone;
- (BOOL)handleItems:(id)arg1;
- (id)init;
- (void)dealloc;

@end