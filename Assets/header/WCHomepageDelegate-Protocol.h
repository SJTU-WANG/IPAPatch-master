//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, WCBGUserInfo;

@protocol WCHomepageDelegate
- (void)onHomepage:(NSString *)arg1 limitFeedIdChanged:(unsigned long long)arg2;
- (void)onHomepage:(NSString *)arg1 BGImgChanged:(WCBGUserInfo *)arg2;
- (void)onHomepage:(NSString *)arg1 totalCountChanged:(long long)arg2;
- (void)onHomepageUpdate:(int)arg1 username:(NSString *)arg2 withAdded:(NSArray *)arg3 andChanged:(NSArray *)arg4 andDeleted:(NSArray *)arg5;
@end

