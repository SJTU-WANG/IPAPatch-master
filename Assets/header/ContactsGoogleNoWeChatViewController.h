//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCActionSheetDelegate-Protocol.h"

@class GoogleContact, MMAnimationTipView, NSString, UIButton;
@protocol GoogleContactViewDelegate;

@interface ContactsGoogleNoWeChatViewController : MMUIViewController <WCActionSheetDelegate>
{
    GoogleContact *m_googleContact;
    MMAnimationTipView *m_tipView;
    UIButton *m_inviteButton;
    id <GoogleContactViewDelegate> m_googleContactViewDelegate;
}

@property(nonatomic) __weak id <GoogleContactViewDelegate> m_googleContactViewDelegate; // @synthesize m_googleContactViewDelegate;
@property(retain, nonatomic) UIButton *m_inviteButton; // @synthesize m_inviteButton;
@property(retain, nonatomic) MMAnimationTipView *m_tipView; // @synthesize m_tipView;
@property(retain, nonatomic) GoogleContact *m_googleContact; // @synthesize m_googleContact;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onInvite:(id)arg1;
- (void)initDetailInfoView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContact:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

