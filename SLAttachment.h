/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSItemProvider, NSString, UIImage;

@interface SLAttachment : NSObject <NSSecureCoding> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _previewUpdateObserver;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _payloadUpdateObserver;

    NSString *_identifier;
    int _previewType;
    UIImage *_previewImage;
    int _type;
    id _payload;
    NSItemProvider *_itemProvider;
    int _itemProviderPreviewType;
    int _downsampleStatus;
}

@property int previewType;
@property(retain) UIImage * previewImage;
@property(readonly) NSString * identifier;
@property int type;
@property(copy) id payload;
@property(retain) NSItemProvider * itemProvider;
@property(readonly) int itemProviderPreviewType;
@property int downsampleStatus;

+ (BOOL)supportsSecureCoding;
+ (BOOL)attachmentTypeRepresentsAnImage:(int)arg1;

- (int)previewType;
- (void)setPreviewType:(int)arg1;
- (void)setPayload:(id)arg1;
- (void).cxx_destruct;
- (id)_uniqueIdentifier;
- (int)type;
- (void)setType:(int)arg1;
- (id)identifier;
- (id)payload;
- (int)itemProviderPreviewType;
- (void)setItemProvider:(id)arg1;
- (void)setPayloadUpdateObserverWithBlock:(id)arg1;
- (void)setPreviewUpdateObserverWithBlock:(id)arg1;
- (int)downsampleStatus;
- (void)setDownsampleStatus:(int)arg1;
- (void)setPreviewImage:(id)arg1;
- (id)initWithPayload:(id)arg1 type:(int)arg2 previewImage:(id)arg3;
- (id)previewImage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (id)itemProvider;

@end
