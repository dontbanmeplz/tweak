#define ENMITY_PROTOCOL @"ccom.hammerandchisel.discord://"

NSDictionary* createResponse(NSString *command, NSString *data);
void sendResponse(NSDictionary *response);

BOOL validateCommand(NSString *command);
NSString* cleanCommand(NSString *command);
NSDictionary* parseCommand(NSString *json);
void handleCommand(NSDictionary *command);
