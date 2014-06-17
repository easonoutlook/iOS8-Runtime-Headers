/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UIBarButtonItem, NSArray;

@interface UIStoryboardPopoverPresentationSegueTemplate : UIStoryboardSegueTemplate  {
    unsigned int _permittedArrowDirections;
    NSArray *_passthroughViews;
    UIView *_anchorView;
    UIBarButtonItem *_anchorBarButtonItem;
}

@property unsigned int permittedArrowDirections;
@property(copy) NSArray * passthroughViews;
@property(retain) UIView * anchorView;
@property(retain) UIBarButtonItem * anchorBarButtonItem;


- (id)defaultSegueClassName;
- (id)segueWithDestinationViewController:(id)arg1;
- (void)setAnchorView:(id)arg1;
- (void)setAnchorBarButtonItem:(id)arg1;
- (void)setPassthroughViews:(id)arg1;
- (id)passthroughViews;
- (void)setPermittedArrowDirections:(unsigned int)arg1;
- (unsigned int)permittedArrowDirections;
- (id)anchorBarButtonItem;
- (id)anchorView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
