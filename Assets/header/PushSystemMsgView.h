//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "MFBanner-Protocol.h"

@class MMURLHandler, SystemMsgWrap;
@protocol PushSystemMsgViewDelegate;

@interface PushSystemMsgView : UIButton <MFBanner>
{
    SystemMsgWrap *m_msgWrap;
    MMURLHandler *m_urlHandler;
    id <PushSystemMsgViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <PushSystemMsgViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setMainFrameViewController:(id)arg1;
- (id)initWithMsgWrap:(id)arg1 andFrame:(struct CGRect)arg2;
- (void)initView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)formatText:(id)arg1;
- (void)handleClose:(id)arg1;
- (void)handleURL;

@end
