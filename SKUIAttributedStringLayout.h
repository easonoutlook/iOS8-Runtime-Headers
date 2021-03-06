/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSStringDrawingContext, NSAttributedString;

@interface SKUIAttributedStringLayout : NSObject <SKUICachedLayout> {
    NSAttributedString *_attributedString;
    struct CGSize { 
        float width; 
        float height; 
    } _boundingSize;
    NSStringDrawingContext *_context;
}

@property(readonly) NSAttributedString * attributedString;
@property(readonly) float baselineOffset;
@property(readonly) struct CGSize { float x1; float x2; } boundingSize;
@property(readonly) int numberOfLines;
@property(readonly) NSStringDrawingContext * stringDrawingContext;


- (struct CGSize { float x1; float x2; })boundingSize;
- (id)stringDrawingContext;
- (id)initWithLayoutRequest:(id)arg1;
- (void).cxx_destruct;
- (int)numberOfLines;
- (float)baselineOffset;
- (id)attributedString;

@end
