//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class UIScrollView, UITextView, WCCardData, WCProductInfo;

@interface WCProductDebugViewController : MMUIViewController
{
    UIScrollView *m_scrollView;
    UITextView *m_textView;
    WCProductInfo *m_productInfo;
    WCCardData *m_cardData;
}

- (void).cxx_destruct;
- (void)initTextView;
- (void)viewDidLoad;
- (id)initWithWCCardData:(id)arg1;
- (id)initWithWCProductInfo:(id)arg1;

@end

