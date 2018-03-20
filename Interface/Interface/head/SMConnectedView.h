//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SMFoundation/SMView.h>

@class NSButton, NSProgressIndicator, NSTrackingArea, SMInterfaceServer, SMService;

__attribute__((visibility("hidden")))
@interface SMConnectedView : SMView
{
    BOOL _mouseInside;
    SMService *_service;
    SMInterfaceServer *_server;
    NSButton *_button;
    NSProgressIndicator *_progressIndicator;
    NSTrackingArea *_trackingArea;
}

+ (id)keyPathsForValuesAffectingStarted;
@property(nonatomic, getter=isMouseInside) BOOL mouseInside; // @synthesize mouseInside=_mouseInside;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSButton *button; // @synthesize button=_button;
@property(retain, nonatomic) SMInterfaceServer *server; // @synthesize server=_server;
@property(retain, nonatomic) SMService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)updateHiddenFlags;
@property(nonatomic, getter=isStarted) BOOL started;
- (void)selectConnect:(id)arg1;
- (void)viewDidInstall;
- (id)initWithFrame:(struct CGRect)arg1;

@end

