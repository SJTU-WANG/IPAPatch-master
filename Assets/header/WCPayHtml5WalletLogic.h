//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMWebViewDelegate-Protocol.h"
#import "WCPayLoadingViewControllerDelegate-Protocol.h"

@class NSString;

@interface WCPayHtml5WalletLogic : WCPayControlLogic <WCPayLoadingViewControllerDelegate, MMWebViewDelegate>
{
}

- (void)loadingViewControllerDidBack:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)showErrorAlert;
- (void)didFail;
- (void)getWalletUrl;
- (void)showWebViewControllerWithURL:(id)arg1 animated:(_Bool)arg2;
- (void)showLoadingViewController;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
