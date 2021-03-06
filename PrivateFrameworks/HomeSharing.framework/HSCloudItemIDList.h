/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSCloudItemIDList : NSObject <NSSecureCoding> {
    NSMutableArray *_idTypes;
    NSMutableArray *_itemIDs;
}

@property (nonatomic, readonly) unsigned int count;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addCloudItemID:(unsigned long long)arg1 idType:(int)arg2;
- (unsigned int)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateCloudItemIDsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
