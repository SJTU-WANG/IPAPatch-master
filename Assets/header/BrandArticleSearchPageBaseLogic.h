//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXSearchJSLogicImpl.h"

#import "UIWebViewDelegate-Protocol.h"

@class BrandArticleSearchLogic, FTSWebSearchMgr, NSString;

@interface BrandArticleSearchPageBaseLogic : WXSearchJSLogicImpl <UIWebViewDelegate>
{
    BrandArticleSearchLogic *m_searchLogic;
    FTSWebSearchMgr *m_searchMgr;
}

- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)currentImplement;
- (double)fontSizeRatio;
- (id)currentLanguage;
- (unsigned int)searchVersion;
- (unsigned int)searchScene;
- (void)dealloc;
- (id)initWithSearchLogic:(id)arg1 webView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
