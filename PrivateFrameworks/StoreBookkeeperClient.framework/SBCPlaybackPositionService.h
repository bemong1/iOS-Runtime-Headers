/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@class NSString, SBCPlaybackPositionDomain;

@interface SBCPlaybackPositionService : SBCXPCService <SBCPlaybackPositionServiceProtocol> {
    SBCPlaybackPositionDomain *_playbackPositionDomain;
    bool_usingPlaybackPositions;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) SBCPlaybackPositionDomain * playbackPositionDomain;
@property(readonly) Class superclass;
@property(readonly) bool usingPlaybackPositions;

+ (Class)XPCServiceInterfaceClass;
+ (id)_serviceForPlaybackPositionDomain:(id)arg1;
+ (id)serviceForSyncDomain:(id)arg1;
+ (id)serviceForValueDomain:(id)arg1;

- (void).cxx_destruct;
- (oneway void)beginAccessingPlaybackPositionEntities;
- (oneway void)deletePlaybackPositionEntities;
- (oneway void)deletePlaybackPositionEntity:(id)arg1;
- (void)didConnectToService;
- (oneway void)endAccessingPlaybackPositionEntities;
- (id)initWithPlaybackPositionDomain:(id)arg1;
- (id)playbackPositionDomain;
- (oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(id)arg2;
- (oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(id)arg2;
- (oneway void)savePlaybackPositionEntity:(id)arg1 isCheckpoint:(bool)arg2;
- (oneway void)synchronizeImmediatelyWithCompletionHandler:(id)arg1;
- (oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1;
- (bool)usingPlaybackPositions;

@end