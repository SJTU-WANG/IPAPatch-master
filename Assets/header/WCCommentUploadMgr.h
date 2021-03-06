//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "MessageObserverDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class FIFOFileQueue, NSMutableDictionary;
@protocol WCCommentUploadMgrDelegate;

@interface WCCommentUploadMgr : MMObject <PBMessageObserverDelegate, MessageObserverDelegate>
{
    FIFOFileQueue *m_queue;
    NSMutableDictionary *m_inQueueCommentsForWCObject;
    int m_uploadingCount;
    id <WCCommentUploadMgrDelegate> m_delegate;
}

@property(nonatomic) __weak id <WCCommentUploadMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)doComment:(id)arg1;
- (void)tryStartNextTask;
- (void)pushBackTopTask;
- (void)popTopTask;
- (void)removeCommentFromWCObjectCache:(id)arg1;
- (void)addCommentToWCObjectCache:(id)arg1;
- (id)getInQueueCommentForWCObject:(id)arg1;
- (void)removeInQueueLikeCommentForWCObject:(id)arg1;
- (void)addComment:(id)arg1;
- (void)dealloc;
- (id)init;

@end

