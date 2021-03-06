/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioIONode : AVAudioNode

@property (nonatomic, readonly) struct OpaqueAudioComponentInstance { }*audioUnit;
@property (nonatomic, readonly) double presentationLatency;

- (struct OpaqueAudioComponentInstance { }*)audioUnit;
- (void)didAttachToEngine:(id)arg1;
- (void)didDetachFromEngine:(id)arg1;
- (double)presentationLatency;

@end
