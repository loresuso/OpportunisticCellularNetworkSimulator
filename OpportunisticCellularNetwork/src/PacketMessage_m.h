//
// Generated file, do not edit! Created by nedtool 5.6 from PacketMessage.msg.
//

#ifndef __PACKETMESSAGE_M_H
#define __PACKETMESSAGE_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>PacketMessage.msg:19</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet PacketMessage
 * {
 *     int userId;
 *     simtime_t arrivalTime;
 *     int sizeBytes;
 * }
 * </pre>
 */
class PacketMessage : public ::omnetpp::cPacket
{
  protected:
    int userId;
    ::omnetpp::simtime_t arrivalTime;
    int sizeBytes;

  private:
    void copy(const PacketMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PacketMessage&);

  public:
    PacketMessage(const char *name=nullptr, short kind=0);
    PacketMessage(const PacketMessage& other);
    virtual ~PacketMessage();
    PacketMessage& operator=(const PacketMessage& other);
    virtual PacketMessage *dup() const override {return new PacketMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getUserId() const;
    virtual void setUserId(int userId);
    virtual ::omnetpp::simtime_t getArrivalTime() const;
    virtual void setArrivalTime(::omnetpp::simtime_t arrivalTime);
    virtual int getSizeBytes() const;
    virtual void setSizeBytes(int sizeBytes);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PacketMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PacketMessage& obj) {obj.parsimUnpack(b);}


#endif // ifndef __PACKETMESSAGE_M_H

