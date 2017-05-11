#pragma once

namespace sfluid {

  class scalar_field {
  protected:
    int x_len, y_len;
    double* values;

  public:
    scalar_field(const int x_elems, const int y_elems) :
      x_len(x_elems), y_len(y_elems) {

      values = new double(x_len*y_elems);

      for (int i = 0; i < x_len; i++) {
	for (int j = 0; j < y_len; j++) {
	  values[i*y_len + j] = 0.0;
	}
      }
    }

    void set(const int i, const int j, const double value) {
      values[i*y_len + j] = value;
    }

    double get(const int i, const int j) const {
      return values[i*y_len + j];
    }

    ~scalar_field() {
      delete[] values;
    }

  };

}
