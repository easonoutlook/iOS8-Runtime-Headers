/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSMutableArray;

@interface BRFieldFinderTags : PBCodable <NSCopying> {
    NSMutableArray *_tags;
}

@property(retain) NSMutableArray * tags;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)tagsAtIndex:(unsigned int)arg1;
- (void)clearTags;
- (unsigned int)tagsCount;
- (void)addTags:(id)arg1;
- (void)setTags:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)tags;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
