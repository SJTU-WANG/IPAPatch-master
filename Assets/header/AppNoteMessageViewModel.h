//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class NSString;

@interface AppNoteMessageViewModel : CommonMessageViewModel
{
    NSString *m_titleText;
    NSString *m_contentText;
    double m_titleHeight;
    double m_contentHeight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)additionalAccessibilityDescription;
@property(readonly, nonatomic) int imageCount;
@property(readonly, nonatomic) double contentHeight;
@property(readonly, nonatomic) double titleHeight;
@property(readonly, nonatomic) NSString *contentText;
@property(readonly, nonatomic) NSString *titleText;
- (id)sourceIcon;
- (id)sourceTitle;
- (_Bool)isShowSourceView;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

