/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPreheatItem : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    int _bestFormat;
    int _format;
    long long _imageType;
    } _optimalSourcePixelSize;
    int _prefetchCount;
    bool_heated;
}

@property int bestFormat;
@property(readonly) int format;
@property bool heated;
@property(readonly) long long imageType;
@property(readonly) struct CGSize { double x1; double x2; } optimalSourcePixelSize;

- (bool)addImageHandler:(id)arg1;
- (int)bestFormat;
- (id)cachedImage:(bool*)arg1;
- (id)cachedImageIfAvailable:(bool*)arg1;
- (void)cancelPreheatRequest;
- (long long)decrementPrefetchCount;
- (int)format;
- (bool)hasPrefetchCount;
- (bool)heated;
- (long long)imageType;
- (long long)incrementPrefetchCount;
- (bool)isCancelled;
- (struct CGSize { double x1; double x2; })optimalSourcePixelSize;
- (void)resetPrefetchCount;
- (void)setBestFormat:(int)arg1;
- (void)setHeated:(bool)arg1;
- (void)startPreheatRequestWithCompletionHandler:(id)arg1;

@end