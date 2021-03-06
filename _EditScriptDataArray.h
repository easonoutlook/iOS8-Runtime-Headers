/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray;

@interface _EditScriptDataArray : NSObject <_EditScriptData> {
    NSArray *_data;
    NSString *_cachedStringValue;
}

@property(retain) NSArray * data;
@property(retain) NSString * cachedStringValue;

+ (id)EditScriptDataWithString:(id)arg1 chunkSize:(int)arg2;
+ (id)EditScriptDataWithArray:(id)arg1;

- (id)cachedStringValue;
- (id)initWithString:(id)arg1 chunkSize:(int)arg2;
- (void)setCachedStringValue:(id)arg1;
- (id)stringAtIndex:(int)arg1;
- (int)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2;
- (int)characterIndexForItem:(int)arg1;
- (int)lengthOfItem:(int)arg1;
- (id)stringValue;
- (id)initWithArray:(id)arg1;
- (void)setData:(id)arg1;
- (id)data;
- (int)length;
- (id)description;
- (void)dealloc;

@end
