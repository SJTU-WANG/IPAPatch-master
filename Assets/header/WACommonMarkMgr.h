//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WACommonMarkMgr : MMService <MMService>
{
    NSMutableDictionary *m_commonMarkDict;
}

@property(retain, nonatomic) NSMutableDictionary *m_commonMarkDict; // @synthesize m_commonMarkDict;
- (void).cxx_destruct;
- (unsigned int)WAAppLastReloadPerDayUsageRecordTime;
- (void)clearWAReloadPerDayUsageRecordTime;
- (void)markWAReloadPerDayUsageRecordTime;
- (unsigned int)WAAppLastGetUsageRecordTime;
- (void)markWAGetUsageRecordTime;
- (void)markWAAppFirstShareDevWeAppWithAppType:(unsigned int)arg1 hadShare:(_Bool)arg2;
- (_Bool)WAAppFirstShareDevWeAppWithAppType:(unsigned int)arg1;
- (void)markWAAppFirstStarState:(_Bool)arg1;
- (_Bool)WAAppHadAddStar;
- (void)markWAAppActivateState:(_Bool)arg1;
- (_Bool)WAAppActivateState;
- (void)loadCommonMark;
- (void)onServiceReloadData;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
