/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSURL, NSString;

@interface EKParticipant : NSObject <NSCopying> {
    NSURL *_address;
    NSString *_commonName;
    NSUInteger _dirtyFlags;
    NSString *_emailAddress;
    BOOL _isSelf;
    NSInteger _role;
    NSInteger _status;
    NSInteger _type;
}

@property(readonly) NSURL *URL;
@property(readonly) NSString *name;
@property(readonly) NSInteger participantRole;
@property(readonly) NSInteger participantStatus;
@property(readonly) NSInteger participantType;

+ (id)participantWithEmailAddress:(id)arg1 commonName:(id)arg2;

- (void*)ABRecordWithAddressBook:(void*)arg1;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2 isSelf:(BOOL)arg3;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2 role:(NSInteger)arg3 status:(NSInteger)arg4 type:(NSInteger)arg5 isSelf:(BOOL)arg6;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2 role:(NSInteger)arg3 status:(NSInteger)arg4 type:(NSInteger)arg5;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithURL:(id)arg1 name:(id)arg2 emailAddress:(id)arg3 role:(NSInteger)arg4 status:(NSInteger)arg5 type:(NSInteger)arg6 isSelf:(BOOL)arg7;
- (id)initWithURL:(id)arg1 name:(id)arg2 isSelf:(BOOL)arg3;
- (id)initWithURL:(id)arg1 name:(id)arg2 role:(NSInteger)arg3 status:(NSInteger)arg4 type:(NSInteger)arg5 isSelf:(BOOL)arg6;
- (BOOL)isCurrentUser;
- (BOOL)isDirty;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (NSInteger)participantRole;
- (NSInteger)participantStatus;
- (NSInteger)participantType;

@end