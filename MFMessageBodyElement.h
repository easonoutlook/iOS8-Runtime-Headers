/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFMessageBodyParser, NSArray;

@interface MFMessageBodyElement : NSObject <MFMessageBodyElement_Private> {
    MFMessageBodyParser *_parser;
    NSArray *_nodes;
    unsigned int _quoteLevel;
    unsigned int _externalRetainCount;
    int _validAttributes;
    int _attributes;
}

@property MFMessageBodyParser * parser;
@property(retain) NSArray * nodes;


- (id)nodes;
- (void)setNodes:(id)arg1;
- (void)reset;
- (unsigned int)getQuoteLevel;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (int)valueForAttributes:(int)arg1;
- (void)releaseExternally;
- (id)retainExternally;
- (void)_setValue:(int)arg1 forAttributes:(int)arg2;
- (id)parser;
- (BOOL)_hasValueForAttributes:(int)arg1;
- (BOOL)isExternallyRetained;
- (void)setParser:(id)arg1;
- (unsigned int)quoteLevel;
- (id)description;
- (void)dealloc;
- (id)init;

@end
