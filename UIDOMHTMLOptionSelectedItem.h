/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMHTMLOptionElement;

@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {
    BOOL _selected;
    DOMHTMLOptionElement *_node;
}

@property(retain) DOMHTMLOptionElement * _node;


- (id)_node;
- (id)initWithHTMLOptionNode:(id)arg1;
- (void)unselect;
- (BOOL)isGroup;
- (id)node;
- (void)set_node:(id)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (void)dealloc;

@end