//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SMFoundation/SMInspectorProperty.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class NSArray, NSString, NSTableView, NSTextField, SMDelayedInvocation, SMGrowingTextField;

__attribute__((visibility("hidden")))
@interface SMInspectorAdvancedTenFourDateFormatProperty : SMInspectorProperty <NSTextFieldDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    NSString *_placeholder;
    NSArray *_presets;
    SMGrowingTextField *_textField;
    NSTableView *_tableView;
    NSTextField *_label;
    SMDelayedInvocation *_updateViewInvocation;
}

@property(retain, nonatomic) SMDelayedInvocation *updateViewInvocation; // @synthesize updateViewInvocation=_updateViewInvocation;
@property(nonatomic) __weak NSTextField *label; // @synthesize label=_label;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak SMGrowingTextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) NSArray *presets; // @synthesize presets=_presets;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)tableViewDidSelectPreset:(id)arg1;
- (void)updateView;
- (id)viewForBaselineAlignment;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

