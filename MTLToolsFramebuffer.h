/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLDevice>, NSString;

@interface MTLToolsFramebuffer : MTLToolsObject <MTLFramebuffer> {
}

@property(readonly) <MTLDevice> * device;
@property(copy) NSString * label;
@property(readonly) unsigned int width;
@property(readonly) unsigned int height;


- (id)device;
- (void)setLabel:(id)arg1;
- (unsigned int)height;
- (id)label;
- (unsigned int)width;
- (void)acceptVisitor:(id)arg1;

@end
