/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityTracklistItemTableViewCell : UITableViewCell <MusicEntityContentDescriptorViewConfiguring, MusicEntityTracklistItemViewDelegate, MusicEntityViewDownloadInformationObserving, MusicEntityViewPlaybackStatusObserving> {
    BOOL _entityDisabled;
    float _leadingTextColumnWidth;
    MusicEntityTracklistItemView *_tracklistItemView;
}

@property (nonatomic, retain) MusicEntityViewContentDescriptor *contentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEntityDisabled, nonatomic) BOOL entityDisabled;
@property (nonatomic, retain) <MusicEntityValueProviding> *entityValueProvider;
@property (readonly) unsigned int hash;
@property (nonatomic) float leadingTextColumnWidth;
@property (readonly) Class superclass;

+ (float)maximumHeightForContentDescriptor:(id)arg1 width:(float)arg2 traitCollection:(id)arg3;

- (void).cxx_destruct;
- (void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg1;
- (id)contentDescriptor;
- (void)dealloc;
- (id)entityValueProvider;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isEntityDisabled;
- (void)layoutSubviews;
- (float)leadingTextColumnWidth;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentDescriptor:(id)arg1;
- (void)setDownloadInformation:(struct MusicEntityDownloadInformation { int x1; float x2; })arg1;
- (void)setEntityDisabled:(BOOL)arg1;
- (void)setEntityValueProvider:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setLeadingTextColumnWidth:(float)arg1;
- (void)setPlaybackStatus:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)tracklistItemView:(id)arg1 didSelectPlayButtonAction:(unsigned int)arg2;
- (void)tracklistItemViewDidSelectContextualActionsButton:(id)arg1;
- (BOOL)tracklistItemViewShouldLayoutAsEditing:(id)arg1;

@end
