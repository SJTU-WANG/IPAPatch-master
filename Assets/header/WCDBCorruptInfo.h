//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDBCorruptInfo : NSObject
{
    _Bool m_alwaysShow;
    unsigned int m_dbID;
    unsigned int m_errorCode;
    id m_dbObject;
    NSString *m_dbPath;
}

@property(nonatomic) _Bool m_alwaysShow; // @synthesize m_alwaysShow;
@property(nonatomic) unsigned int m_errorCode; // @synthesize m_errorCode;
@property(retain, nonatomic) NSString *m_dbPath; // @synthesize m_dbPath;
@property(nonatomic) __weak id m_dbObject; // @synthesize m_dbObject;
@property(nonatomic) unsigned int m_dbID; // @synthesize m_dbID;
- (void).cxx_destruct;
- (_Bool)closeDBAndPreventOtherThreadsInBlock:(CDUnknownBlockType)arg1;
- (_Bool)clearCorruptNum;
- (_Bool)isValid;
- (id)description;

@end

