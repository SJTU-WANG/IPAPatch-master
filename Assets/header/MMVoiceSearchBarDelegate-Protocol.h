//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UISearchBar;

@protocol MMVoiceSearchBarDelegate <NSObject>
- (void)MMVoiceSearchBarCancelButtonClicked:(UISearchBar *)arg1;
- (void)MMVoiceSearchBarSearchButtonClicked:(UISearchBar *)arg1;
- (void)MMVoiceSearchBar:(UISearchBar *)arg1 textDidChange:(NSString *)arg2;
- (_Bool)MMVoiceSearchBarShouldBeginEditing:(UISearchBar *)arg1;
@end
