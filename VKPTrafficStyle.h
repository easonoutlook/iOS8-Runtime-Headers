/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPTrafficStyle : PBCodable <NSCopying> {
    float _fadingOffset;
    float _fadingSlope;
    unsigned int _fillColor;
    float _patternLength;
    float _patternSlotLength;
    float _patternWidth;
    unsigned int _secondaryColor;
    int _uNUSEDPattern;
    float _widthFraction;
    struct { 
        unsigned int fadingOffset : 1; 
        unsigned int fadingSlope : 1; 
        unsigned int fillColor : 1; 
        unsigned int patternLength : 1; 
        unsigned int patternSlotLength : 1; 
        unsigned int patternWidth : 1; 
        unsigned int secondaryColor : 1; 
        unsigned int uNUSEDPattern : 1; 
        unsigned int widthFraction : 1; 
    } _has;
}

@property BOOL hasWidthFraction;
@property float widthFraction;
@property BOOL hasFillColor;
@property unsigned int fillColor;
@property BOOL hasUNUSEDPattern;
@property int uNUSEDPattern;
@property BOOL hasPatternSlotLength;
@property float patternSlotLength;
@property BOOL hasSecondaryColor;
@property unsigned int secondaryColor;
@property BOOL hasPatternLength;
@property float patternLength;
@property BOOL hasPatternWidth;
@property float patternWidth;
@property BOOL hasFadingOffset;
@property float fadingOffset;
@property BOOL hasFadingSlope;
@property float fadingSlope;


- (float)fadingSlope;
- (BOOL)hasFadingSlope;
- (void)setHasFadingSlope:(BOOL)arg1;
- (void)setFadingSlope:(float)arg1;
- (BOOL)hasFadingOffset;
- (void)setHasFadingOffset:(BOOL)arg1;
- (void)setFadingOffset:(float)arg1;
- (BOOL)hasPatternWidth;
- (void)setHasPatternWidth:(BOOL)arg1;
- (void)setPatternWidth:(float)arg1;
- (BOOL)hasPatternLength;
- (void)setHasPatternLength:(BOOL)arg1;
- (void)setPatternLength:(float)arg1;
- (BOOL)hasSecondaryColor;
- (void)setHasSecondaryColor:(BOOL)arg1;
- (BOOL)hasPatternSlotLength;
- (void)setHasPatternSlotLength:(BOOL)arg1;
- (void)setPatternSlotLength:(float)arg1;
- (BOOL)hasUNUSEDPattern;
- (void)setHasUNUSEDPattern:(BOOL)arg1;
- (void)setUNUSEDPattern:(int)arg1;
- (int)uNUSEDPattern;
- (BOOL)hasWidthFraction;
- (void)setHasWidthFraction:(BOOL)arg1;
- (void)setWidthFraction:(float)arg1;
- (float)widthFraction;
- (float)fadingOffset;
- (float)patternWidth;
- (float)patternLength;
- (float)patternSlotLength;
- (void)setHasFillColor:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasFillColor;
- (unsigned int)secondaryColor;
- (void)setSecondaryColor:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (unsigned int)fillColor;
- (void)setFillColor:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
