/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIRuntimeConnection : NSObject <NSCoding> {
    id source;
    id destination;
    NSString *label;
}


- (void)setDestination:(id)arg1;
- (id)destination;
- (void)setSource:(id)arg1;
- (id)source;
- (void)connect;
- (void)connectForSimulator;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
