//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString;
@protocol WCNewYearSYNYFireCrackerDelegate;

@interface WCNewYearSYNYFireCracker : CALayer <CAAnimationDelegate>
{
    id <WCNewYearSYNYFireCrackerDelegate> _oDelegate;
    CALayer *_body;
}

@property(retain, nonatomic) CALayer *body; // @synthesize body=_body;
@property(nonatomic) __weak id <WCNewYearSYNYFireCrackerDelegate> oDelegate; // @synthesize oDelegate=_oDelegate;
- (void).cxx_destruct;
- (id)makeRandomPathForShape:(id)arg1;
- (id)makeScaleValue;
- (id)makeBoomAnimationForShape:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)boom;
- (void)clear;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

