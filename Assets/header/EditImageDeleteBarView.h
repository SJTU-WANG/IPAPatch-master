//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIButton, UILabel, UIView;

@interface EditImageDeleteBarView : MMUIView
{
    UIView *_line;
    _Bool _isSelected;
    UIButton *_deleteBtn;
    UILabel *_tipLabel;
}

@property(retain, nonatomic) UILabel *_tipLabel; // @synthesize _tipLabel;
@property(nonatomic) _Bool _isSelected; // @synthesize _isSelected;
@property(retain, nonatomic) UIButton *_deleteBtn; // @synthesize _deleteBtn;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)reloadButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

