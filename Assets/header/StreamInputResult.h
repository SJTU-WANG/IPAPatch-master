//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary;

@interface StreamInputResult : MMObject
{
    NSMutableDictionary *_results;
}

@property(retain, nonatomic) NSMutableDictionary *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (id)GetResultString;
- (void)UpdateVoiceTransResult:(id)arg1;
- (void)dealloc;
- (id)init;

@end

