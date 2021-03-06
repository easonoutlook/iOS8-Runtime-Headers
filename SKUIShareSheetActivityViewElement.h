/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIImageViewElement, NSString, SKUILabelViewElement, SKUIURLViewElement, NSURL;

@interface SKUIShareSheetActivityViewElement : SKUIViewElement  {
    NSString *_activityType;
    NSURL *_contentSourceURL;
}

@property(readonly) NSString * activityType;
@property(readonly) NSURL * contentSourceURL;
@property(readonly) SKUIImageViewElement * image;
@property(readonly) SKUILabelViewElement * message;
@property(readonly) SKUILabelViewElement * title;
@property(readonly) SKUIURLViewElement * URL;


- (id)contentSourceURL;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (void).cxx_destruct;
- (id)activityType;
- (id)message;
- (id)image;
- (id)title;
- (id)URL;

@end
