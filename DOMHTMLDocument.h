/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMHTMLCollection, NSString;

@interface DOMHTMLDocument : DOMDocument  {
}

@property(readonly) DOMHTMLCollection * embeds;
@property(readonly) DOMHTMLCollection * plugins;
@property(readonly) DOMHTMLCollection * scripts;
@property(readonly) int width;
@property(readonly) int height;
@property(copy) NSString * dir;
@property(copy) NSString * designMode;
@property(copy,readonly) NSString * compatMode;
@property(copy) NSString * bgColor;
@property(copy) NSString * fgColor;
@property(copy) NSString * alinkColor;
@property(copy) NSString * linkColor;
@property(copy) NSString * vlinkColor;

+ (id)mf_listElements;

- (void)releaseEvents;
- (void)captureEvents;
- (void)writeln:(id)arg1;
- (void)write:(id)arg1;
- (void)setVlinkColor:(id)arg1;
- (id)vlinkColor;
- (void)setLinkColor:(id)arg1;
- (id)linkColor;
- (void)setAlinkColor:(id)arg1;
- (id)alinkColor;
- (void)setFgColor:(id)arg1;
- (id)fgColor;
- (void)setDir:(id)arg1;
- (id)dir;
- (id)scripts;
- (id)plugins;
- (id)embeds;
- (void)open;
- (void)setBgColor:(id)arg1;
- (id)_createDocumentFragmentWithText:(id)arg1;
- (id)_createDocumentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2;
- (id)createDocumentFragmentWithText:(id)arg1;
- (id)createDocumentFragmentWithMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)compatMode;
- (id)bgColor;
- (void)setDesignMode:(id)arg1;
- (id)designMode;
- (void)close;
- (int)height;
- (int)width;
- (void)clear;
- (id)mf_createMessageQuoteElement;

@end