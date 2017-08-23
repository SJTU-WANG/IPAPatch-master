//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString, SystemMsgTextWrap, UIImage, UIView;

@interface SystemMsgWrap : NSObject <NSCoding>
{
    SystemMsgTextWrap *m_title;
    SystemMsgTextWrap *m_description;
    UIImage *m_backgroundImage;
    UIView *m_backgroundView;
    NSString *m_url;
    NSString *m_backupURL;
    _Bool m_enableClose;
    _Bool m_closeButtonTransparent;
}

@property(nonatomic) _Bool m_closeButtonTransparent; // @synthesize m_closeButtonTransparent;
@property(nonatomic) _Bool m_enableClose; // @synthesize m_enableClose;
@property(retain, nonatomic) NSString *m_backupURL; // @synthesize m_backupURL;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url;
@property(retain, nonatomic) UIView *m_backgroundView; // @synthesize m_backgroundView;
@property(retain, nonatomic) UIImage *m_backgroundImage; // @synthesize m_backgroundImage;
@property(retain, nonatomic) SystemMsgTextWrap *m_description; // @synthesize m_description;
@property(retain, nonatomic) SystemMsgTextWrap *m_title; // @synthesize m_title;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
