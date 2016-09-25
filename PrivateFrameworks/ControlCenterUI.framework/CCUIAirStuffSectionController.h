/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIAirStuffSectionController : CCUIControlCenterSectionViewController <MPAVRoutingControllerDelegate, SFAirDropDiscoveryAlertControllerDelegate, SFAirDropDiscoveryControllerDelegate, UIPopoverControllerDelegate> {
    UIAlertController * _airDropAlertController;
    SFAirDropDiscoveryController * _airDropDiscoveryController;
    CCUIControlCenterPushButton * _airDropSection;
    MPAVRoutingController * _airPlayController;
    MPAVRoutingSheet * _airPlayModalSheet;
    MPAudioVideoRoutingPopoverController * _airPlayPopoverController;
    CCUIControlCenterPushButton * _airPlaySection;
    BSTimer * _airPlayTimer;
    BOOL  _isVisible;
    unsigned int  _mode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int mode;
@property (readonly) Class superclass;

+ (id)defaultFontTight;
+ (Class)viewClass;

- (void).cxx_destruct;
- (void)_airDropTapped:(id)arg1;
- (void)_airPlayDoneButtonTapped:(id)arg1;
- (void)_airPlayTapped:(id)arg1;
- (void)_dismissAirDropWithCompletion:(id /* block */)arg1;
- (void)_dismissAirplayControllerAnimated:(BOOL)arg1;
- (void)_noteSectionEnabledStateDidChange;
- (void)_presentAirDropWithCompletion:(id /* block */)arg1;
- (id)_selectedStateColor;
- (void)_showAirPlayView:(id)arg1;
- (void)_updateAirDropControlAsEnabled:(BOOL)arg1;
- (void)_updateForAirDropStateChange;
- (void)_updateForAirPlayStateChange;
- (void)_updateLayoutForSizeCategoryChange;
- (void)_updateSubsectionVisibility;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (void)discoveryController:(id)arg1 alertControllerDidDismiss:(id)arg2;
- (void)discoveryControllerSettingsDidChange:(id)arg1;
- (void)discoveryControllerVisibilityDidChange:(id)arg1;
- (BOOL)dismissModalFullScreenIfNeeded;
- (BOOL)enabled;
- (id)init;
- (unsigned int)mode;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (id)sectionIdentifier;
- (void)setMode:(unsigned int)arg1;
- (id)view;
- (void)viewDidLoad;

@end