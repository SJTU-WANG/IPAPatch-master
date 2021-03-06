//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "IVideoExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSString, SightIconView, UIImageView, UILabel, VideoMessageViewModel, YYAsyncImageView;

@interface VideoMessageCellView : CommonMessageCellView <UIAlertViewDelegate, IVideoExt>
{
    YYAsyncImageView *m_thumbImageView;
    SightIconView *m_sightIconView;
    UIImageView *m_videoInfoBgView;
    UILabel *m_videoTimeLabel;
    UILabel *m_videoSizeLabel;
    int m_uiStatus;
}

- (void).cxx_destruct;
- (void)OnVideoThumbDidChange:(id)arg1;
- (void)onSendFailButtonClicked:(id)arg1;
- (void)onSendFailButtonClicked:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)onClick:(_Bool)arg1 soundable:(_Bool)arg2;
- (void)StartDownloadVideo:(id)arg1;
- (void)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)StartUploadVideo:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onAppear;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)onSliencePlay:(id)arg1;
- (void)onForward:(id)arg1;
- (id)operationMenuItems;
- (void)initVideoInfoView;
- (void)initSightIconView;
- (void)initThumbImageView;
- (struct CGRect)showRectForMenuController;
- (id)displayViewForImageBrowser;
- (void)updateStatus;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) VideoMessageViewModel *viewModel; // @dynamic viewModel;

@end

