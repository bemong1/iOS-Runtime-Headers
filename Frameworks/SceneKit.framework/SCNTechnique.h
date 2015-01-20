/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class NSDictionary, NSMutableDictionary, NSString, SCNOrderedDictionary;

@interface SCNTechnique : NSObject <SCNAnimatable, NSCopying, NSSecureCoding> {
    unsigned int _isPresentationInstance : 1;
    SCNOrderedDictionary *_animations;
    id _reserved;
    struct __C3DFXTechnique { } *_technique;
    NSMutableDictionary *_valueForSymbol;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSDictionary * dictionaryRepresentation;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)SCNJSExportProtocol;
+ (bool)supportsSecureCoding;
+ (id)techniqueBySequencingTechniques:(id)arg1;
+ (id)techniqueWithDictionary:(id)arg1;
+ (id)techniqueWithTechniqueRef:(struct __C3DFXTechnique { }*)arg1;

- (void*)__CFObject;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_customDecodingOfSCNTechnique:(id)arg1;
- (void)_customEncodingOfSCNTechnique:(id)arg1;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2;
- (id)_symbolsAssignedValues;
- (void)_syncObjCAnimations;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimation:(id)arg1;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __C3DModelValueStorage {} *x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; boolx7; boolx8; boolx9; struct _C3DAnimationPendingEvent {} *x10; struct __C3DAllocator {} *x11; struct __CFDictionary {} *x12; struct __CFArray {} *x13; double x14; double x15; struct _opaque_pthread_mutex_t { long long x_16_1_1; BOOL x_16_1_2[56]; } x16; int x17; int x18; int x19; int x20; }*)animationManager;
- (id)copy;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(id)arg2;
- (id)initPresentationTechniqueWithTechniqueRef:(struct __C3DFXTechnique { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTechniqueRef:(struct __C3DFXTechnique { }*)arg1;
- (bool)isAnimationForKeyPaused:(id)arg1;
- (bool)isPausedOrPausedByInheritance;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationInstance;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1;
- (void)resumeAnimationForKey:(id)arg1;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (void)setValue:(id)arg1 forSymbolNamed:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (struct __C3DFXTechnique { }*)techniqueRef;
- (id)valueForSymbolNamed:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end