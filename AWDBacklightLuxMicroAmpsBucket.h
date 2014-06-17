/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDBacklightLuxMicroAmpsBucket : PBCodable <NSCopying> {
    unsigned int _bucketDuration;
    struct { 
        unsigned int bucketDuration : 1; 
    } _has;
}

@property BOOL hasBucketDuration;
@property unsigned int bucketDuration;


- (unsigned int)bucketDuration;
- (BOOL)hasBucketDuration;
- (void)setHasBucketDuration:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBucketDuration:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
