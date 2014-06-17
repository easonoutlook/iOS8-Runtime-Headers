/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSString;

@interface NSGlyphInfo : NSObject <NSCopying, NSCoding> {
    NSString *_baseString;
}

+ (id)glyphInfoWithGlyphName:(id)arg1 forFont:(id)arg2 baseString:(id)arg3;
+ (id)glyphInfoWithCharacterIdentifier:(unsigned int)arg1 collection:(unsigned int)arg2 baseString:(id)arg3;
+ (id)glyphInfoWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;
+ (void)initialize;

- (unsigned int)characterCollection;
- (unsigned int)characterIdentifier;
- (id)glyphName;
- (id)_baseString;
- (id)initWithBaseString:(id)arg1;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (Class)classForKeyedArchiver;

@end
