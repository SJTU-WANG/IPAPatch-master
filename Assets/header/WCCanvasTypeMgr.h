//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface WCCanvasTypeMgr : NSObject
{
    NSSet *_validTypeSet;
}

@property(retain, nonatomic) NSSet *validTypeSet; // @synthesize validTypeSet=_validTypeSet;
- (void).cxx_destruct;
- (_Bool)hasCanvasTypeValid:(id)arg1;
- (_Bool)isScrollGroupComponentAllTypesValid:(id)arg1;
- (_Bool)isComponetTypeValid:(id)arg1;
- (_Bool)isCanvasTypesAllValid:(id)arg1;
- (void)initValidTypeSet;
- (id)init;

@end
