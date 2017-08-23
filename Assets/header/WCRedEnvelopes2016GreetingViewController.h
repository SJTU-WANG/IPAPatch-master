//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "GKImagePickerDelegate-Protocol.h"
#import "IZCWScrollNumViewDelegate-Protocol.h"
#import "WCRedEnvelopesCdnManagerDelegate-Protocol.h"

@class GKImagePicker, MMToastViewController, MMUILabel, NSArray, NSNumber, NSString, SingleImageBrowser, UIButton, UIImage, UIImageView, UIView, WCRedEnvelopesCdnManager, WCRedEnvelopesControlData, ZCWScrollNumView;
@protocol WCRedEnvelopes2016GreetingViewControllerDelegate;

@interface WCRedEnvelopes2016GreetingViewController : MMUIViewController <IZCWScrollNumViewDelegate, GKImagePickerDelegate, WCRedEnvelopesCdnManagerDelegate>
{
    int m_currentNum;
    NSString *m_currentWish;
    NSString *m_nsStatusMsg;
    double m_numAnimationDuration;
    int m_currentMessIndex;
    NSArray *m_oMessArr;
    NSString *m_nsHeadUrl;
    NSString *m_nsSenderNickName;
    SingleImageBrowser *m_oImageBrowser;
    int m_enStatus;
    NSString *m_chatName;
    _Bool _m_bIsSender;
    _Bool _m_bScrollNum;
    _Bool _m_bPitcureEnable;
    _Bool _m_bIsCreate;
    _Bool _m_bFisrtLayout;
    id <WCRedEnvelopes2016GreetingViewControllerDelegate> _m_delegate;
    UIView *_m_coverView;
    UIView *_m_containerView;
    UIImageView *_m_containerBGImgView;
    UIButton *_m_closeBtn;
    UIButton *_m_cameraBtn;
    UIImageView *_m_pictureBGImgView;
    UIImageView *_m_pictureImgView;
    UIView *_m_pictureLoadingView;
    UIButton *_m_pictureDelBtn;
    MMUILabel *_m_greetingLabel;
    MMUILabel *_m_yuanLabel;
    ZCWScrollNumView *_m_numView;
    UIButton *_m_randomNextMoneyBtn;
    MMUILabel *_m_saveBalanceLabel;
    UIButton *_m_sendBtn;
    MMUILabel *_m_statusLabel;
    UIView *_m_senderView;
    WCRedEnvelopesControlData *_m_data;
    UIImage *_m_oImage;
    MMToastViewController *_m_toastView;
    GKImagePicker *_m_picker;
    WCRedEnvelopesCdnManager *_m_oCdnManager;
    NSString *_m_cdnFileId;
    NSString *_m_cdnAesKey;
    NSNumber *_m_cdnFileLength;
}

@property(retain, nonatomic) NSNumber *m_cdnFileLength; // @synthesize m_cdnFileLength=_m_cdnFileLength;
@property(retain, nonatomic) NSString *m_cdnAesKey; // @synthesize m_cdnAesKey=_m_cdnAesKey;
@property(retain, nonatomic) NSString *m_cdnFileId; // @synthesize m_cdnFileId=_m_cdnFileId;
@property(retain, nonatomic) WCRedEnvelopesCdnManager *m_oCdnManager; // @synthesize m_oCdnManager=_m_oCdnManager;
@property(retain, nonatomic) GKImagePicker *m_picker; // @synthesize m_picker=_m_picker;
@property(retain, nonatomic) MMToastViewController *m_toastView; // @synthesize m_toastView=_m_toastView;
@property(nonatomic) _Bool m_bFisrtLayout; // @synthesize m_bFisrtLayout=_m_bFisrtLayout;
@property(retain, nonatomic) UIImage *m_oImage; // @synthesize m_oImage=_m_oImage;
@property(nonatomic) _Bool m_bIsCreate; // @synthesize m_bIsCreate=_m_bIsCreate;
@property(nonatomic) _Bool m_bPitcureEnable; // @synthesize m_bPitcureEnable=_m_bPitcureEnable;
@property(nonatomic) _Bool m_bScrollNum; // @synthesize m_bScrollNum=_m_bScrollNum;
@property(nonatomic) _Bool m_bIsSender; // @synthesize m_bIsSender=_m_bIsSender;
@property(retain, nonatomic) WCRedEnvelopesControlData *m_data; // @synthesize m_data=_m_data;
@property(retain, nonatomic) UIView *m_senderView; // @synthesize m_senderView=_m_senderView;
@property(retain, nonatomic) MMUILabel *m_statusLabel; // @synthesize m_statusLabel=_m_statusLabel;
@property(retain, nonatomic) UIButton *m_sendBtn; // @synthesize m_sendBtn=_m_sendBtn;
@property(retain, nonatomic) MMUILabel *m_saveBalanceLabel; // @synthesize m_saveBalanceLabel=_m_saveBalanceLabel;
@property(retain, nonatomic) UIButton *m_randomNextMoneyBtn; // @synthesize m_randomNextMoneyBtn=_m_randomNextMoneyBtn;
@property(retain, nonatomic) ZCWScrollNumView *m_numView; // @synthesize m_numView=_m_numView;
@property(retain, nonatomic) MMUILabel *m_yuanLabel; // @synthesize m_yuanLabel=_m_yuanLabel;
@property(retain, nonatomic) MMUILabel *m_greetingLabel; // @synthesize m_greetingLabel=_m_greetingLabel;
@property(retain, nonatomic) UIButton *m_pictureDelBtn; // @synthesize m_pictureDelBtn=_m_pictureDelBtn;
@property(retain, nonatomic) UIView *m_pictureLoadingView; // @synthesize m_pictureLoadingView=_m_pictureLoadingView;
@property(retain, nonatomic) UIImageView *m_pictureImgView; // @synthesize m_pictureImgView=_m_pictureImgView;
@property(retain, nonatomic) UIImageView *m_pictureBGImgView; // @synthesize m_pictureBGImgView=_m_pictureBGImgView;
@property(retain, nonatomic) UIButton *m_cameraBtn; // @synthesize m_cameraBtn=_m_cameraBtn;
@property(retain, nonatomic) UIButton *m_closeBtn; // @synthesize m_closeBtn=_m_closeBtn;
@property(retain, nonatomic) UIImageView *m_containerBGImgView; // @synthesize m_containerBGImgView=_m_containerBGImgView;
@property(retain, nonatomic) UIView *m_containerView; // @synthesize m_containerView=_m_containerView;
@property(retain, nonatomic) UIView *m_coverView; // @synthesize m_coverView=_m_coverView;
@property(nonatomic) __weak id <WCRedEnvelopes2016GreetingViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (float)hb_height;
- (float)hb_width;
- (void)endAnimation;
- (void)showAnimation;
- (void)downloadImageWithFileId:(id)arg1 aesKey:(id)arg2 filePath:(id)arg3 fileLength:(int)arg4 clientMsgId:(id)arg5;
- (void)uploadImage:(id)arg1;
- (void)onWcRedEnvelopesCdnManagerDidDownloadImage:(_Bool)arg1 fileId:(id)arg2;
- (void)onWcRedEnvelopesCdnManagerUploadImagePercent:(double)arg1;
- (void)onWcRedEnvelopesCdnManagerDidUploadImage:(_Bool)arg1 fileName:(id)arg2 fileId:(id)arg3 aesKey:(id)arg4 fileLength:(int)arg5;
- (void)imagePickerDidCancel:(id)arg1;
- (void)imagePicker:(id)arg1 pickedImage:(id)arg2;
- (void)onNumViewAnimationDidStop;
- (void)clearUploadImageSetting;
- (_Bool)hasUploadImage;
- (void)sendWithImage;
- (void)sendWithOutImage;
- (void)onImageTap:(id)arg1;
- (void)onCoverTap:(id)arg1;
- (void)onSendBtnClick:(id)arg1;
- (void)onNextLucyMoneyClick:(id)arg1;
- (void)onPictureDelBtnClick:(id)arg1;
- (void)onCameraBtnClick:(id)arg1;
- (void)onCloseClick:(id)arg1;
- (void)dismiss;
- (void)show;
- (void)setUploadingStatus:(_Bool)arg1;
- (void)showFailToastViewText:(id)arg1;
- (void)tryDownloadImage;
- (void)tryLoadImageForReceive;
- (void)tryLoadImageForSender;
- (void)genImage;
- (void)layoutExpiredView;
- (void)layoutReceiveView;
- (void)layoutSendView;
- (void)viewDidLayoutSubviews;
- (void)layoutViews;
- (void)viewDidLoad;
- (void)setupView;
- (void)centerButton:(id)arg1 imageSpacing:(double)arg2;
- (void)configNumView:(id)arg1 withNumber:(int)arg2 font:(id)arg3;
- (_Bool)isMsgWrapHasImage;
- (id)initReceiveViewWithIsScrollNum:(_Bool)arg1 payData:(id)arg2;
- (id)initSendViewWithIsScrollNum:(_Bool)arg1 payData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
