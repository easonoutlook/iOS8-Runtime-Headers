/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface _WKElementAction : NSObject  {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    } _title;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _actionHandler;

    int _type;
}

@property(readonly) int type;
@property(readonly) NSString * title;

+ (id)elementActionWithType:(int)arg1 customTitle:(id)arg2;
+ (id)elementActionWithTitle:(id)arg1 actionHandler:(id)arg2;
+ (id)elementActionWithType:(int)arg1;

- (id)_initWithTitle:(id)arg1 actionHandler:(id)arg2 type:(int)arg3;
- (void)_runActionWithElementInfo:(id)arg1 view:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)type;
- (id)title;
- (void)dealloc;

@end
