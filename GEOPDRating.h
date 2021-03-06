/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDRating : PBCodable <NSCopying> {
    double _maxScore;
    double _score;
    int _numRatingsUsedForScore;
    int _ratingType;
    struct { 
        unsigned int maxScore : 1; 
        unsigned int score : 1; 
        unsigned int numRatingsUsedForScore : 1; 
        unsigned int ratingType : 1; 
    } _has;
}

@property BOOL hasRatingType;
@property int ratingType;
@property BOOL hasScore;
@property double score;
@property BOOL hasMaxScore;
@property double maxScore;
@property BOOL hasNumRatingsUsedForScore;
@property int numRatingsUsedForScore;

+ (id)ratingForPlaceData:(id)arg1 type:(int)arg2;

- (BOOL)hasScore;
- (void)setHasScore:(BOOL)arg1;
- (void)setScore:(double)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (double)score;
- (void)setHasNumRatingsUsedForScore:(BOOL)arg1;
- (void)setNumRatingsUsedForScore:(int)arg1;
- (BOOL)hasRatingType;
- (void)setHasRatingType:(BOOL)arg1;
- (void)setRatingType:(int)arg1;
- (int)ratingType;
- (int)numRatingsUsedForScore;
- (BOOL)hasNumRatingsUsedForScore;
- (BOOL)hasMaxScore;
- (void)setHasMaxScore:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)setMaxScore:(double)arg1;
- (double)maxScore;

@end
