//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCProductLocationInfo : NSObject
{
    float latitude;
    float longitude;
    NSString *country;
    NSString *province;
    NSString *city;
    NSString *address;
}

@property(nonatomic) float longitude; // @synthesize longitude;
@property(nonatomic) float latitude; // @synthesize latitude;
@property(retain, nonatomic) NSString *address; // @synthesize address;
@property(retain, nonatomic) NSString *city; // @synthesize city;
@property(retain, nonatomic) NSString *province; // @synthesize province;
@property(retain, nonatomic) NSString *country; // @synthesize country;
- (void).cxx_destruct;

@end
