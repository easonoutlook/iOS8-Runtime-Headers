/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIImage;

@interface _UIDocumentPickerAuxiliaryOption : NSObject <NSSecureCoding> {
    NSString *_title;
    UIImage *_image;
    NSString *_identifier;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    unsigned int _order;
}

@property(copy) NSString * title;
@property(retain) UIImage * image;
@property(copy) NSString * identifier;
@property(copy) id handler;
@property unsigned int order;

+ (BOOL)supportsSecureCoding;

- (unsigned int)order;
- (void)setOrder:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (id)handler;
- (void)setHandler:(id)arg1;
- (id)image;
- (id)title;
- (id)identifier;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end