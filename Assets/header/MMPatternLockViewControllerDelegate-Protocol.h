//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMPatternLockViewControllerDelegate <NSObject>
- (_Bool)isNeedSvrVerify;
- (void)onPressBackOnPresnetedLockVC;
- (void)onClosePatternLockPwdWithPatternHash:(NSString *)arg1;
- (void)onModifyPatternLockWithNewPatternHash:(NSString *)arg1;
- (void)onPatternLockVerifyPatternLockPwdWithPatternHash:(NSString *)arg1;
- (void)onPatternLockSetupNewWithPatternHash:(NSString *)arg1;
- (void)onPatternLockViewControllerDidErrorBeyondLimit;
- (void)onPatternLockViewControllerDidForgetPwd;
- (void)onPatternLockViewControllerDidOperateSuccess;
- (void)onPatternLockViewControllerDidOperateCancel;
@end
