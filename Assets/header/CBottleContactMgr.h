//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"

@class CBottleContactDB, NSMutableDictionary, NSString;

@interface CBottleContactMgr : MMService <MMService, MessageObserverDelegate>
{
    CBottleContactDB *m_oDB;
    NSMutableDictionary *m_dicContacts;
    _Bool m_bDataNeedReload;
}

- (void).cxx_destruct;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (long long)GetBottleContactCount;
- (void)saveImageStatus:(id)arg1 ImgStatus:(id)arg2;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (_Bool)syncAllBottleContact;
- (_Bool)RemoveContactList:(id)arg1;
- (_Bool)addContact:(id)arg1;
- (id)getContactByName:(id)arg1;
- (id)getSelfContact;
- (id)getAllContact;
- (void)initDB:(id)arg1 lock:(id)arg2;
- (_Bool)autoReload;
- (_Bool)setHDHeadUpdated:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)onSyncBottleContact:(id)arg1;
- (void)internalDeleteContact:(id)arg1;
- (void)internalModifyContact:(id)arg1;
- (void)internalAddContact:(id)arg1;
- (void)removeListen;
- (void)initListen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
