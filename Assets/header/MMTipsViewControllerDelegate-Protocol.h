//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIButton;

@protocol MMTipsViewControllerDelegate <NSObject>

@optional
- (void)onClickTipsBtn:(UIButton *)arg1 Index:(long long)arg2 withText:(NSString *)arg3 withTipsVC:(id)arg4;
- (void)onClickTipsBtn:(UIButton *)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onClickTipsBtn:(UIButton *)arg1 Index:(long long)arg2;
- (void)onClickTipsBtn:(unsigned long long)arg1;
@end

