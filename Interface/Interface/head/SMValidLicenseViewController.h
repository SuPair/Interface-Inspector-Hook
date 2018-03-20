//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SMFoundation/SMViewController.h>

@class NSImage, NSString;
@protocol SMValidLicenseViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SMValidLicenseViewController : SMViewController
{
    NSImage *_applicationImage;
    NSString *_applicationName;
    NSString *_licenseName;
    id <SMValidLicenseViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SMValidLicenseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *licenseName; // @synthesize licenseName=_licenseName;
@property(copy, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(retain, nonatomic) NSImage *applicationImage; // @synthesize applicationImage=_applicationImage;
- (void).cxx_destruct;
- (void)close:(id)arg1;
- (void)changeLicense:(id)arg1;
- (void)viewWillUnload;
- (void)loadView;

@end

