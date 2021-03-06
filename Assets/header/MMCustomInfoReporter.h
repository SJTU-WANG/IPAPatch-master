//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "crashReportConnectionDelegate-Protocol.h"

@class MMCrashReportConnection, NSString;
@protocol MMCustomInfoReportMgrDelegate;

@interface MMCustomInfoReporter : NSObject <crashReportConnectionDelegate>
{
    MMCrashReportConnection *m_crashReportConnection;
    id <MMCustomInfoReportMgrDelegate> _delegate;
}

@property(nonatomic) __weak id <MMCustomInfoReportMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onUploadCrashCompleted:(_Bool)arg1 CrashWrap:(id)arg2;
- (void)reportInfo:(id)arg1 withReportType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

